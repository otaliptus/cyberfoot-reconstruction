// Address: 004de380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004de380(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004de41d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar3 = &stack0xfffffffc;
  if (*PTR_DAT_0066adfc != '\0') {
    puVar1 = *(undefined **)(*(int *)(param_1 + 8) + 4);
    puVar3 = &stack0xfffffffc;
    if (puVar1 != PTR_PTR_004625ec) {
      cVar4 = thunk_FUN_00403cb4(puVar1,PTR_PTR_004dd380);
      puVar3 = puStack_18;
      if (cVar4 == '\0') goto LAB_004de402;
    }
    puStack_18 = puVar3;
    if (*(undefined **)(*(int *)(param_1 + 8) + 4) == PTR_PTR_004625ec) {
      *(undefined **)(*(int *)(param_1 + 8) + 4) = PTR_PTR_004dd380;
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar2[0xf] = puVar2;
    FUN_004dda80(*puVar2,&local_c);
    FUN_004ddaf0(local_c,&local_8);
    FUN_00404b6c(*(int *)(param_1 + 8) + 0x38,local_8);
    puVar3 = puStack_18;
  }
LAB_004de402:
  puStack_18 = puVar3;
  puVar3 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004de424;
  puStack_1c = (undefined1 *)0x4de41c;
  FUN_00405008(&local_c,2,puVar3);
  return;
}

