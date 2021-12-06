from flask import Flask
from flask import request
from flask import render_template_string

app = Flask(__name__)
@app.route('/',methods=['GET'])
def test():
    name = request.args.get('name', 'hacker')
    template = '''
        <div class="center-content error">
            <h1>Do you like python?</h1>
            <h3>%s</h3>
        </div> 
        <! /?name ---->
    ''' %(name)

    return render_template_string(template)

if __name__ == '__main__':
    app.debug = True
    app.run(host='0.0.0.0' , port=8080)
