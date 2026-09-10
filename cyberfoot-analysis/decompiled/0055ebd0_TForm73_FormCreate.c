// Address: 0055ebd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm73_FormCreate(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [52];
  undefined1 local_48 [48];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_98 = &stack0xfffffffc;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_9c = &LAB_0055ef26;
  uStack_a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a0;
  iVar4 = 0xca;
  puVar3 = (undefined4 *)(PTR_DAT_0066b2bc + 4);
  do {
    FUN_00409dd8(*puVar3,&local_10);
    FUN_00404c64(&local_c,3);
    FUN_004051d4(&local_8,local_c);
    FUN_0040526c(&local_8,puVar3[-1]);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x33c),local_8);
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*PTR_DAT_0066b6d8 == '\0') {
    DAT_0067b420 = 0;
  }
  else {
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),
                 *(undefined4 *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4));
    FUN_00466238(*(undefined4 *)(param_1 + 0x2f8),"Edit national team");
    FUN_00466238(*(undefined4 *)(param_1 + 0x324),&DAT_0055ef7c);
    (**(code **)(**(int **)(param_1 + 0x33c) + 100))(*(int **)(param_1 + 0x33c),0);
    (**(code **)(**(int **)(param_1 + 0x31c) + 0xd0))
              (*(int **)(param_1 + 0x31c),
               *(int *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x48) + -1);
    FUN_00404b48(&local_14,PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x27);
    FUN_00466238(*(undefined4 *)(param_1 + 800),local_14);
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0x16c),
                 *(undefined4 *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x54));
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x16c),
                 *(undefined4 *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x50));
    FUN_004030d4(local_48,&DAT_0055ef80);
    FUN_004030a4(local_48,PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 8,0x2d);
    FUN_004030d4(local_7c,local_48);
    FUN_004030a4(local_7c,&DAT_0055ef90,0x31);
    FUN_00404b48(&local_18,local_7c);
    cVar2 = FUN_0040a43c(local_18);
    if (cVar2 == '\0') {
      FUN_004030d4(local_48,&DAT_0055ef80);
      FUN_004030a4(local_48,PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 8,0x2d);
      FUN_004030d4(local_7c,local_48);
      FUN_004030a4(local_7c,&DAT_0055ef98,0x31);
      FUN_00404b48(&local_84,local_7c);
      cVar2 = FUN_0040a43c(local_84);
      if (cVar2 != '\0') {
        FUN_004030d4(local_48,&DAT_0055ef80);
        FUN_004030a4(local_48,PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 8,0x2d);
        FUN_004030d4(local_7c,local_48);
        FUN_004030a4(local_7c,&DAT_0055ef98,0x31);
        FUN_00404b48(&local_88,local_7c);
        FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x168),local_88);
      }
    }
    else {
      FUN_004030d4(local_48,&DAT_0055ef80);
      FUN_004030a4(local_48,PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 8,0x2d);
      FUN_004030d4(local_7c,local_48);
      FUN_004030a4(local_7c,&DAT_0055ef90,0x31);
      FUN_00404b48(&local_80,local_7c);
      FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x168),local_80);
    }
  }
  puVar1 = puStack_98;
  *in_FS_OFFSET = uStack_a0;
  puStack_98 = &LAB_0055ef2d;
  puStack_9c = (undefined1 *)0x55ef10;
  FUN_004048f8(&local_88,3,puVar1);
  puStack_9c = (undefined1 *)0x55ef1d;
  FUN_004048f8(&local_18,4);
  puStack_9c = (undefined1 *)0x55ef25;
  FUN_00404ff0(&local_8);
  return;
}

