from distutils.core import setup
setup(name='VCNspendfrom',
      version='1.0',
      description='Command-line utility for votcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@votcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
