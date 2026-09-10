// Address: 0062a4b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0062a4b0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = GetSystemMetrics(0);
  if (param_4 == 1) {
    iVar3 = 0x14;
  }
  else {
    iVar3 = 0xdc;
  }
  if ((iVar1 == 800) && (iVar3 == 0xdc)) {
    iVar3 = 0x96;
  }
  if (param_2 <= param_3) {
    iVar1 = (param_3 - param_2) + 1;
    puVar2 = &DAT_006d4958 + param_2;
    do {
      FUN_00465978(*puVar2,*(int *)(*(int *)(&DAT_006d49f8 + param_5 * 4) + 0x40) + iVar3);
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

