// Address: 004eb2fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb2fc(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004eb392;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if (*(int *)(param_1 + 0x27c) != 0) {
    cVar2 = FUN_00432488(param_2,1,0xc);
    puVar1 = puStack_18;
    if (cVar2 != '\0') {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x27c) + 0x14))();
      puVar1 = puStack_18;
      if (0xb < iVar3) {
        (**(code **)(**(int **)(param_1 + 0x27c) + 0xc))
                  (*(int **)(param_1 + 0x27c),param_2 + -1,&local_c);
        FUN_004051d4(local_8,local_c);
        goto LAB_004eb37c;
      }
    }
  }
  puStack_18 = puVar1;
  FUN_004051d4(local_8,*(undefined4 *)(PTR_DAT_0066b570 + param_2 * 4 + -4));
LAB_004eb37c:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004eb399;
  puStack_1c = (undefined1 *)0x4eb391;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

