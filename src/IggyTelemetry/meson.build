#
# Constants
#
iggy_telemetry_version = 41 # Pulled this from a version check function, not entirely sure if this actually corresponds to the version (it's either 0x29 or 1)


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
  version : '1.0.' + iggy_telemetry_version.to_string(),
)
iggytelemetry_dep = declare_dependency(
  link_with : [ iggytelemetry ],
)
