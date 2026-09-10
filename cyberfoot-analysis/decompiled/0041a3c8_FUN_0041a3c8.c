// Address: 0041a3c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a3c8(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    iVar2 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,iVar2);
    return;
  }
  FUN_0041a374((int)param_1 + ((uint)pcVar1 & 0xffffff),param_3);
  return;
}

