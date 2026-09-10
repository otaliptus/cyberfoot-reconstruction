// Address: 00473944
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473944(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004739f1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  if (((*(int *)(param_1 + 0x30) < 1) || (0x8000 < *(int *)(param_1 + 0x30))) ||
     (*(int *)(param_1 + 0x34) < 1)) {
    FUN_00406d44(PTR_PTR_0066af68,&local_8);
    FUN_0040e370(PTR_DAT_0041b6dc,1,local_8);
    FUN_00404250();
  }
  *(undefined4 *)(param_1 + 0x38) = 4;
  *(undefined1 *)(param_1 + 0x41) = 1;
  FUN_00474894(param_1,2);
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x1fffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1fffffff;
  uVar2 = FUN_0042fcb8(PTR_PTR_00429378,1);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  FUN_00473a10(param_1);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004739f8;
  puStack_14 = (undefined1 *)0x4739f0;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

