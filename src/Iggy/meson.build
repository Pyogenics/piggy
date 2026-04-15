#
# Constants
#
iggy_flash_version = '9,1,2,30'
iggy_version = meson.project_version()


#
# Source definitions
#
sources_iggy = files(
)
include_directories_iggy = include_directories(
    'include'
)


#
# Targets
#
iggy = library(
  'iggy',
  sources_iggy,
  include_directories : include_directories_iggy,
  dependencies : [
    radrr_dep,
    gdraw_dep,
  ],
  version : iggy_version,
)
iggy_dep = declare_dependency(
  include_directories : include_directories_iggy,
  link_with : [ iggy ],
)
