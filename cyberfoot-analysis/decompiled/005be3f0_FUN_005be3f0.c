// Address: 005be3f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005be3f0(int param_1)

{
  HGLOBAL pvVar1;
  LPSTREAM *ppstm;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 uStack_30;
  undefined1 *puVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_005be4b2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  FUN_005be768(param_1);
  uStack_30 = 0x5be420;
  pvVar1 = GlobalAlloc(2,0);
  *(HGLOBAL *)(local_8 + 0x214) = pvVar1;
  if (pvVar1 == (HGLOBAL)0x0) {
    FUN_0040e364();
  }
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  ppstm = (LPSTREAM *)FUN_00406880(&local_c);
  CreateStreamOnHGlobal(*(HGLOBAL *)(local_8 + 0x214),0,ppstm);
  FUN_004ac7a4();
  piVar2 = *(int **)(local_8 + 0x21c);
  (**(code **)(*piVar2 + 0x18))();
  FUN_004ac7a4();
  *in_FS_OFFSET = piVar2;
  *in_FS_OFFSET = uStack_30;
  FUN_00406880(&local_c,uStack_30,puVar3);
  return;
}

