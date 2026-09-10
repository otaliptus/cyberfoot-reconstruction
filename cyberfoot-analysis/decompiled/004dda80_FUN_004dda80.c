// Address: 004dda80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dda80(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004ddae4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  do {
    if (param_1 == 0) {
      FUN_00404ff0(param_2);
LAB_004ddace:
      puVar1 = puStack_14;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = &LAB_004ddaeb;
      puStack_18 = (undefined1 *)0x4ddae3;
      FUN_00404ff0(&local_8,uStack_1c,puVar1);
      return;
    }
    FUN_004dd9e8(param_1,&local_8);
    bVar2 = true;
    FUN_00405378(local_8);
    if (!bVar2) {
      FUN_004dd9e8(param_1,param_2);
      goto LAB_004ddace;
    }
    param_1 = *(int *)(param_1 + 0x30);
  } while( true );
}

