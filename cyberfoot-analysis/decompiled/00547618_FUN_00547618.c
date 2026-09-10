// Address: 00547618
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00547618(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x54762b;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_18 = &LAB_005476b7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar2 = FUN_00405574(&DAT_005476c8,local_8);
  if (iVar2 < 1) {
    FUN_0040502c(param_2,local_8);
  }
  else {
    FUN_004053fc(local_8,1,iVar2 + -1,param_2);
    FUN_00405448(&local_8,1,iVar2);
    iVar2 = FUN_00405574(&DAT_005476d4,local_8);
    if (0 < iVar2) {
      FUN_00405448(&local_8,iVar2,1);
    }
    FUN_0040526c(param_2,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005476be;
  puStack_18 = (undefined1 *)0x5476b6;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

