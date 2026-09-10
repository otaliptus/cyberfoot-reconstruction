// Address: 00431a48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431a48(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [2];
  short local_12;
  undefined2 local_10;
  undefined1 local_c [4];
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    FUN_004208f4();
    uStack_18 = 0x431a77;
    FUN_00420b00(*(undefined4 *)(iVar1 + 0xc),auStack_14,6);
    if (local_12 != 0) {
      if (local_12 == 1) {
        uStack_18 = 6;
        FUN_0042c3e0(*(undefined4 *)(iVar1 + 0xc),local_c,local_10,iVar1 + 0x10,param_1 + 0x2c);
      }
      else {
        uStack_18 = 0x431ab3;
        FUN_0042b88c();
      }
    }
    *(undefined4 *)(iVar1 + 8) = uStack_18;
  }
  return;
}

