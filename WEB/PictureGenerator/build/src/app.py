from flask import Flask, request, redirect, url_for
import os
import random
import string
import time 

clean = time.time()
app = Flask(__name__)
chars = list(string.ascii_letters + string.digits)

@app.route('/')
def main():
    return open("index.html").read()

@app.route('/generate', methods=['POST'])
def upload():
    global clean
    if time.time() - clean > 60:
      os.system("rm static/images/*")
      clean = time.time()
    data = request.form.getlist('text')[0]
    data = data.replace("\"", "")
    data = data.replace("$","")
    name = "".join(random.choices(chars,k=8)) + ".png"
    os.system(f"python3 gene.py {name} \"{data}\"")
    return redirect(url_for('static', filename='images/' + name), code=301)
  
if __name__ == "__main__":
  app.run("0.0.0.0",80)
