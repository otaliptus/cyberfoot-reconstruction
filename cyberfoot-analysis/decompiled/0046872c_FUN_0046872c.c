// Address: 0046872c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046872c(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x468745;
    param_1 = FUN_00403de8();
    local_5 = extraout_DL;
  }
  puStack_2c = &LAB_00468824;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00465308(param_1,0);
  uVar2 = FUN_00427ee8();
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  uVar2 = FUN_0042a9c4(PTR_PTR_00428bb8,1);
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  FUN_0042ab6c(uVar2,*(undefined4 *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 0x1a9) = 1;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x184) = 3;
  if (*(int *)(PTR_DAT_0066b7ac + 4) == 0x11) {
    FUN_004048d4(param_1 + 0x188);
  }
  else {
    FUN_0048531c(*(undefined4 *)PTR_DAT_0066b760,&local_c);
    FUN_00404928(param_1 + 0x188,local_c);
  }
  puVar1 = puStack_28;
  *(undefined1 *)(param_1 + 0x1a7) = 0;
  *(undefined1 *)(param_1 + 0x162) = DAT_0046884c;
  *(undefined1 *)(param_1 + 0x163) = 2;
  *(undefined1 *)(param_1 + 0x164) = 1;
  *(undefined4 *)(param_1 + 0x168) = 1;
  *(undefined1 *)(param_1 + 0x150) = 1;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0046882b;
  puStack_2c = (undefined1 *)0x468823;
  FUN_004048d4(&local_c,uStack_30,puVar1);
  return;
}

