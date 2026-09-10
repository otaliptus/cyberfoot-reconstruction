// Address: 00406238
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

PVOID FUN_00406238(LPCVOID param_1)

{
  _MEMORY_BASIC_INFORMATION local_1c;
  
  VirtualQuery(param_1,&local_1c,0x1c);
  if (local_1c.State != 0x1000) {
    local_1c.AllocationBase = (PVOID)0x0;
  }
  return local_1c.AllocationBase;
}

