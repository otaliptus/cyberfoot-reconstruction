// Address: 00508450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00508450(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  tagRECT *ptStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [8];
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  puStack_34 = (undefined1 *)0x508467;
  FUN_00405608(&param_4);
  puStack_38 = &LAB_00508506;
  ptStack_3c = (tagRECT *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&ptStack_3c;
  puStack_34 = &stack0xfffffffc;
  cVar2 = FUN_004e3090(param_1);
  if ((cVar2 != '\0') && (*(char *)(*(int *)PTR_DAT_0066b3ac + 0x88) != '\0')) {
    (**(code **)(*param_1 + 0x238))();
    ptStack_3c = &local_1c;
    uVar3 = FUN_00465c0c(param_1);
    FUN_004e2e44(param_1[0x163],uVar3,param_4);
    FUN_004070b8(param_2,param_3,local_24);
    FUN_00465d20(param_1,local_24,&local_c);
    OffsetRect(&local_1c,local_c,local_8);
    FUN_004e2dd8(param_1[0x163],&local_1c,param_4);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = (int)ptStack_3c;
  puStack_34 = &LAB_0050850d;
  puStack_38 = (undefined1 *)0x508505;
  FUN_00404ff0(&param_4,ptStack_3c,puVar1);
  return;
}

