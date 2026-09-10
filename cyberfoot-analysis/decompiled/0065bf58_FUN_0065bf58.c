// Address: 0065bf58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065bf58(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((iVar1 != 1) && (iVar1 != 5)) {
    if ((iVar1 == 2) || (iVar1 == 6)) {
      puStack_8 = (undefined1 *)0x65c035;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ec860,PTR_DAT_0066b444);
      puStack_8 = (undefined1 *)0x65c044;
      (**(code **)(**(int **)PTR_DAT_0066b444 + 0xec))();
    }
    else if ((iVar1 == 3) || (iVar1 == 7)) {
      puStack_8 = (undefined1 *)0x65c068;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0056e1d8,PTR_DAT_0066b6dc);
      puStack_8 = (undefined1 *)0x65c077;
      (**(code **)(**(int **)PTR_DAT_0066b6dc + 0xec))();
    }
    else if ((iVar1 == 4) || (iVar1 == 8)) {
      puStack_8 = (undefined1 *)0x65c088;
      cVar3 = FUN_00651f8c();
      if (cVar3 == '\0') {
        puStack_8 = (undefined1 *)0x65c0a4;
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b6278,PTR_DAT_0066add0);
        puStack_8 = (undefined1 *)0x65c0b3;
        (**(code **)(**(int **)PTR_DAT_0066add0 + 0xec))();
      }
    }
    return;
  }
  puStack_8 = (undefined1 *)0x65bf7c;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  puStack_8 = (undefined1 *)0x65bf8a;
  FUN_00466414(DAT_007c9620,CONCAT22(extraout_var,0xfff5));
  puStack_8 = (undefined1 *)0x65bf98;
  FUN_00466414(DAT_007c9610,CONCAT22(extraout_var_00,0xfff5));
  puStack_8 = (undefined1 *)0x65bfa4;
  FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
  puStack_c = &LAB_0065bff2;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  puStack_8 = &stack0xfffffffc;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0062e56c,PTR_DAT_0066b454);
  FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b454);
  puVar2 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_0065bff9;
  puStack_c = (undefined1 *)0x65bff1;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar2);
  return;
}

