// Address: 0040fe94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040fe94(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0040ff0b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_1 != 0) {
    uVar3 = FUN_00406880(&local_8);
    cVar2 = FUN_00403b38(param_1,&DAT_0040ff1c,uVar3);
    if ((cVar2 == '\0') ||
       (cVar2 = FUN_0040fe70(local_8,param_2,param_3), puVar1 = puStack_18, cVar2 == '\0')) {
      FUN_00403b38(param_1,param_2,param_3);
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040ff12;
  puStack_1c = (undefined1 *)0x40ff0a;
  FUN_00406880(&local_8,uStack_20,puVar1);
  return;
}

