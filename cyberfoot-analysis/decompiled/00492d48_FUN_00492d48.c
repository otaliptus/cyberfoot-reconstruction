// Address: 00492d48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492d48(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar2 = FUN_00493388(param_1);
      if (iVar2 != 0) {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_00493498;
        goto LAB_00492d79;
      }
    }
    *(code **)(iVar1 + 0xc) = FUN_004931b8;
  }
LAB_00492d79:
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}

