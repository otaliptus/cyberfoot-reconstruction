// Address: 00426f28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426f28(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    iVar2 = FUN_0041e078(*(undefined4 *)(param_1 + 0x14),param_2);
    if (iVar2 < 0) {
      FUN_0041dec0(*(undefined4 *)(param_1 + 0x14),param_2);
      FUN_00426f28(param_2,param_1);
    }
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x100;
  return;
}

