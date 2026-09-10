// Address: 00656098
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00656098(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00656112;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_004032c8(0xb);
  FUN_0040496c(&local_8,(&PTR_DAT_0066abd8)[iVar2]);
  iVar2 = FUN_004032c8(0xb);
  puVar1 = (&PTR_s_Silva_0066ac04)[iVar2];
  uVar3 = local_8;
  FUN_00404c64(&local_8,3);
  FUN_00404928(param_1,local_8);
  *in_FS_OFFSET = puVar1;
  FUN_004048d4(&local_8,puVar1,uVar3,&LAB_00656119);
  return;
}

