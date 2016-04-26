
#ifndef {{include_guard_name}}
#define {{include_guard_name}}

// Gaudi
#include "GaudiAlg/GaudiTool.h"


/**  
 *
 */
class {{name}}: public GaudiTool, virtual public {{interface_name}} {
public:
  explicit {{name}}(const std::string& aType , const std::string& aName,
                  const IInterface* aParent);
  virtual ~{{name}}();
  virtual StatusCode initialize();
  virtual StatusCode finalize();
private:

};

#endif /* {{include_guard_name}} */
