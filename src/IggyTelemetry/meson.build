#
# Source definitions
#
sources_iggytelemetry = files(
)


#
# Target
#
iggytelemetry = library(
  'iggytelemetry',
  sources_iggytelemetry,
)
radrr_dep = declare_dependency(
  include_directories : include_directories( 'include/RadRR' ),
  link_with : [ radrr ],
)
