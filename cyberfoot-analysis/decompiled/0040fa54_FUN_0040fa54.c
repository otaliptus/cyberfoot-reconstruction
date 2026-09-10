// Address: 0040fa54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040fa54(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return iVar1 + -1;
}

