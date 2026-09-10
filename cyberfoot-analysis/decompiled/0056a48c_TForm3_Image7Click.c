// Address: 0056a48c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Image7Click(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 local_54 [36];
  undefined1 local_30 [32];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_60 = &stack0xfffffffc;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  puStack_64 = &LAB_0056a5fa;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puVar2 = &stack0xfffffffc;
  if (DAT_0067b4c9 == '\0') {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))();
    puVar2 = puStack_60;
    if (iVar3 == 0) goto LAB_0056a5df;
  }
  puStack_60 = puVar2;
  if (DAT_0067b4c9 == '\0') {
    FUN_00404b48(&local_8,DAT_0067b4b8 + 4 + DAT_0067b4c0 * 200);
    if (DAT_0067b4c9 == '\0') {
      uVar4 = 0;
      FUN_00404c64(&local_c,3);
      iVar3 = FUN_00437ef0(local_c,3,CONCAT22(extraout_var,DAT_0056a674),uVar4);
      if (iVar3 == 6) {
        FUN_004030d4(local_30,&DAT_0056a678);
        FUN_004030a4(local_30,DAT_0067b4b8 + 0x57 + DAT_0067b4c0 * 200,0x1f);
        FUN_004030d4(local_54,local_30);
        FUN_004030a4(local_54,&DAT_0056a680,0x23);
        FUN_00404b48(&local_10,local_54);
        FUN_0040a564(local_10);
        piVar1 = *(int **)(param_1 + 0x2f8);
        uVar4 = (**(code **)(*piVar1 + 0x138))();
        (**(code **)(*piVar1 + 0x1e4))(piVar1,uVar4);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
        if (0 < iVar3) {
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0x20c))
                    (*(int **)(param_1 + 0x2f8),0,0,0,1,DAT_0056a688);
        }
      }
    }
  }
LAB_0056a5df:
  puVar2 = puStack_60;
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_0056a601;
  puStack_64 = (undefined1 *)0x56a5f9;
  FUN_004048f8(&local_10,3,puVar2);
  return;
}

