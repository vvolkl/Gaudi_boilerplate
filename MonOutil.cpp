


#include "{{filename}}.h"

DECLARE_TOOL_FACTORY({{name}})


{{name}}::{{name}}(
  const std::string& aType,
  const std::string& aName,
  const IInterface* aParent)
  : GaudiTool(aType, aName, aParent) {
  declareInterface<{{interface_name}}>(this);


StatusCode {{name}}::initialize() {
  return GaudiTool::initialize();
}

StatusCode {{name}}::finalize() {
  return GaudiTool::finalize();
}
