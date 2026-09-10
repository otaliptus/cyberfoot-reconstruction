// Address: 004bbf9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bbf9c(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_004bc054;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004048d4(param_2);
  iVar2 = (**(code **)(**(int **)(local_8 + 0x198) + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 == 0) {
        (**(code **)(**(int **)(local_8 + 0x198) + 0xc))(*(int **)(local_8 + 0x198),0,&local_10);
        FUN_00404bac(local_c,local_10);
      }
      else {
        (**(code **)(**(int **)(local_8 + 0x198) + 0xc))
                  (*(int **)(local_8 + 0x198),iVar3,&local_14,&DAT_004bc06c,*local_c);
        FUN_00404c64(local_c,3);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004bc05b;
  puStack_28 = (undefined1 *)0x4bc053;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

