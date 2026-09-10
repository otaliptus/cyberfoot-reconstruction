// Address: 00426590
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426590(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_00426636;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00406ba4(param_2,&local_c);
  iVar2 = FUN_00404ba4(local_c);
  iVar3 = FUN_00405260(param_2);
  if (iVar2 < iVar3 * 2) {
    FUN_00404b6c(&local_10,param_2);
    FUN_004264a4(param_1,local_10,local_c);
  }
  else {
    FUN_00426644(param_1,0x12);
    local_8 = FUN_00405260(param_2);
    FUN_004243ec(param_1,&local_8,4);
    FUN_004243ec(param_1,param_2,local_8 * 2);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0042663d;
  puStack_24 = (undefined1 *)0x42662d;
  FUN_004048d4(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x426635;
  FUN_004048d4(&local_c);
  return;
}

