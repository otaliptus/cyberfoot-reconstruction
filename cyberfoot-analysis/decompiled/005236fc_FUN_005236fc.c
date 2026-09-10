// Address: 005236fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005236fc(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_005237dc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = (int *)0x0;
  puStack_28 = (undefined1 *)0x52372e;
  cVar3 = FUN_00403c10(param_2,PTR_LAB_00428ed8);
  if (cVar3 == '\0') {
    puStack_28 = (undefined1 *)0x52378b;
    cVar3 = FUN_00403c10(param_2,PTR_PTR_00515dcc);
    piVar2 = param_2;
    if (cVar3 == '\0') {
      puStack_28 = (undefined1 *)0x5237a1;
      FUN_00406d44(&PTR_DAT_005166d4,&local_c);
      puStack_28 = (undefined1 *)0x5237a9;
      FUN_00516934(local_c);
      piVar2 = local_8;
    }
  }
  else {
    puStack_28 = (undefined1 *)0x523740;
    local_8 = (int *)FUN_0051d104(PTR_PTR_00515dcc,1,param_1);
    puStack_2c = &LAB_00523765;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    *in_FS_OFFSET = uStack_30;
    piVar2 = local_8;
  }
  local_8 = piVar2;
  puStack_28 = (undefined1 *)0x5237b4;
  FUN_0051aae0(param_1[0xb],local_8);
  puStack_28 = (undefined1 *)0x5237bd;
  FUN_005236d4(param_1);
  puStack_28 = (undefined1 *)0x5237c6;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005237e3;
  puStack_20 = (undefined1 *)0x5237db;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

