import setuptools

setuptools.setup (
  include_package_data = True,
  name = 'practice',
  version = '1.0.0',
  description = 'Git-chana',
  author = 'hesuhesu'
  url = "https://github.com/hesuhesu/Git-chana",
  download_url = "https://github.com/hesuhesu/Git-chana/archive/refs/tags/v1.0.0.zip",
  install_requires=['pytest'],
  long_description = 'Git-chana practice python module',
  long_description_content_type = 'text/markdown',
  classifiers = [
    "Programming Language :: Python :: 3",
    "Operating System :: OS Independent",
  ],
)
