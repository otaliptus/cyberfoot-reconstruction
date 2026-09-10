// Address: 0040fa68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040fa68(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1;
}

