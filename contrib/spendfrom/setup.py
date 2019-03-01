from distutils.core import setup
setup(name='itgcspendfrom',
      version='1.0',
      description='Command-line utility for itgoldcoins "coin control"',
      author='Gavin Andresen',
      author_email='gavin@itgoldcoinsfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
