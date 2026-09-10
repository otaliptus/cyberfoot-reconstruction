// Address: 00630b80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm9_combo1Change(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00630cc0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0x2f8);
  uVar4 = (**(code **)(*piVar1 + 0xcc))();
  iVar5 = FUN_00443198(piVar1[0xa3],uVar4);
  if (*(int *)(iVar5 + 0x18) == 0x1d) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),1);
    FUN_0053d874(*(undefined4 *)(param_1 + 0x32c),"Jogar Copa do Brasil");
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
    piVar1 = *(int **)(param_1 + 0x2f8);
    uVar4 = (**(code **)(*piVar1 + 0xcc))();
    iVar5 = FUN_00443198(piVar1[0xa3],uVar4);
    FUN_004052cc(&local_c,L"Jogar Copa do(a) ",
                 *(undefined4 *)(PTR_DAT_0066b294 + *(int *)(iVar5 + 0x18) * 4));
    FUN_00404b6c(&local_8,local_c);
    FUN_0053d874(*(undefined4 *)(param_1 + 0x32c),local_8);
  }
  piVar1 = *(int **)(param_1 + 0x2f8);
  uVar4 = (**(code **)(*piVar1 + 0xcc))();
  iVar5 = FUN_00443198(piVar1[0xa3],uVar4);
  cVar3 = FUN_0064f2d0(*(undefined4 *)(iVar5 + 0x18));
  if (cVar3 == '\0') {
    FUN_0053d874(*(undefined4 *)(param_1 + 0x328),&DAT_00630d20);
    FUN_0053d874(*(undefined4 *)(param_1 + 0x324),"Jogar Liga Europa da UEFA");
  }
  else {
    FUN_0053d874(*(undefined4 *)(param_1 + 0x328),&DAT_00630d64);
    FUN_0053d874(*(undefined4 *)(param_1 + 0x324),"Jogar Copa Sul-Americana");
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00630cc7;
  puStack_1c = (undefined1 *)0x630cb7;
  FUN_00404ff0(&local_c,uStack_20,puVar2);
  puStack_1c = (undefined1 *)0x630cbf;
  FUN_004048d4(&local_8);
  return;
}

