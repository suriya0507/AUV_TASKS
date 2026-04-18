import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/suriya_prakash/task3_ws/install/submarine_pkg'
