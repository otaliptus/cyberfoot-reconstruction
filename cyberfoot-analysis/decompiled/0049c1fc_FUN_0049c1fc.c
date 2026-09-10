// Address: 0049c1fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049c1fc(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x5c + param_2 * 4) + param_3 * 4);
    *piVar1 = *piVar1 + 1;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x4c + param_2 * 4);
  FUN_0049c140(param_1,*(undefined4 *)(iVar2 + param_3 * 4),(int)*(char *)(iVar2 + 0x400 + param_3))
  ;
  return;
}

