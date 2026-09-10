// Address: 004ea608
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ea608(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined1 local_1c [16];
  undefined1 local_c [8];
  
  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  puStack_34 = &LAB_004ea6c1;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_004070b8(param_2,param_3,local_c);
  FUN_004e9204(param_1,local_1c);
  cVar2 = FUN_004070c0(local_1c,local_c);
  if (cVar2 != '\0') {
    iVar4 = (param_3 + -2) / *(int *)(param_1 + 0x284) + *(int *)(*(int *)(param_1 + 0x244) + 0x2c);
    *(int *)(param_1 + 0x280) = iVar4;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x288) + 0x14))();
    cVar2 = FUN_00432488(iVar4,0,iVar3 + -1);
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x288) + 0xc))
                (*(int **)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x280),&local_20);
      FUN_00403c80(param_1,local_20);
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004ea6c8;
  puStack_34 = (undefined1 *)0x4ea6c0;
  FUN_004048d4(&local_20,uStack_38,puVar1);
  return;
}

