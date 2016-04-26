#include "{{filename}}.h"


DECLARE_ALGORITHM_FACTORY({{name}})

{{name}}::{{name}}(const std::string& aName, ISvcLocator* aSvcLoc):
  GaudiAlgorithm(aName, aSvcLoc) {
  //declareInput("genParticles", m_genParticles);
  //declareProperty("outputs",m_saveToolNames);
}
{{name}}::~{{name}}() {}

StatusCode {{name}}::initialize() {
  StatusCode sc = GaudiAlgorithm::initialize();
  return sc;
}


StatusCode {{name}}::finalize() {
  StatusCode sc = GaudiAlgorithm::finalize();
  return sc;
}

StatusCode {{name}}::execute() {
  return StatusCode::SUCCESS;
}
