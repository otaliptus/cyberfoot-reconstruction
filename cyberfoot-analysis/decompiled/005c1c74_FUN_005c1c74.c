// Address: 005c1c74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c1c74(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_005c1d1d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar4 = *PTR_DAT_0066adfc == '\0';
  puVar1 = &stack0xfffffffc;
  if (!(bool)uVar4) {
    cVar2 = FUN_005c184c();
    uVar4 = cVar2 == '\0';
    puVar1 = puStack_1c;
    if (!(bool)uVar4) {
      cVar2 = FUN_004d3a3c(param_2);
      uVar4 = cVar2 == '\0';
      puVar1 = puStack_1c;
      if (!(bool)uVar4) {
        FUN_00404b6c(&local_8,param_2);
        FUN_005c1bd4(param_1,0,local_8);
        goto LAB_005c1cfa;
      }
    }
  }
  puStack_1c = puVar1;
  FUN_005c1c0c(param_1,&local_c);
  FUN_00405378(param_2,local_c);
  if (!(bool)uVar4) {
    uVar3 = FUN_005c1a78(param_1);
    FUN_004d35b4(param_2,uVar3,&local_10);
    FUN_004dd894(param_1,local_10);
  }
LAB_005c1cfa:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005c1d24;
  puStack_20 = (undefined1 *)0x5c1d14;
  FUN_00405008(&local_10,2,puVar1);
  puStack_20 = (undefined1 *)0x5c1d1c;
  FUN_004048d4(&local_8);
  return;
}

