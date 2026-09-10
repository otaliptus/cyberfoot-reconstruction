// Address: 0047481c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047481c(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00474888;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x20))();
    if (*(int *)(param_1 + 0x30) <= iVar2) {
      iVar2 = (**(code **)(*param_2 + 0x2c))();
      puVar1 = puStack_14;
      if (*(int *)(param_1 + 0x34) <= iVar2) goto LAB_00474872;
    }
    FUN_00406d44(PTR_PTR_0066af68,&local_8);
    FUN_0040e370(PTR_DAT_0041b6dc,1,local_8);
    FUN_00404250();
    puVar1 = puStack_14;
  }
LAB_00474872:
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047488f;
  puStack_18 = (undefined1 *)0x474887;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

