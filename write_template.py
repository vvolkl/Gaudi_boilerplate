import jinja2

conf = {'name': 'MyAlgo'}



def set_if_key_not_present(dictionary, key, value):
  dictionary[key] = dictionary.setdefault(key, value)

set_if_key_not_present(conf, 'filename', conf['name'])
set_if_key_not_present(conf, 'include_guard_name', conf['name'].upper() + '_H')
set_if_key_not_present(conf, 'interface_name', 'I' + conf['name'])
set_if_key_not_present(conf, 'interface_include_guard_name', conf['interface_name'] + '_H')

import sys

extension = sys.argv[1].split('.')[-1]
filename = ''.join(sys.argv[1].split('.')[:-1])
with open(sys.argv[1]) as f:
  t = jinja2.Template(f.read())
  new_f = t.render(conf)
with open(conf['filename'] + '.' + extension, 'w') as f:
  f.write(new_f)

