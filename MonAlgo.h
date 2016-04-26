#ifndef {{include_guard_name}}
#define {{include_guard_name}}

#include "GaudiAlg/GaudiAlgorithm.h"

class {{name}}: public GaudiAlgorithm {
public:
  explicit {{name}}(const std::string&, ISvcLocator*);
  virtual ~{{name}}();
  virtual StatusCode initialize() final;
  virtual StatusCode execute() final;
  virtual StatusCode finalize() final;
  private:

#endif /* {{include_guard_name}} */
