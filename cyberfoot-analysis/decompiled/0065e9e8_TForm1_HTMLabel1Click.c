// Address: 0065e9e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_HTMLabel1Click(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 1) {
    puStack_c = (undefined1 *)0x65ea0a;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
    puStack_c = (undefined1 *)0x65ea16;
    FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
    puStack_10 = &LAB_0065ea64;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    puStack_c = &stack0xfffffffc;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0062e56c,PTR_DAT_0066b454);
    FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b454);
    puVar2 = puStack_c;
    *in_FS_OFFSET = uStack_14;
    puStack_c = &LAB_0065ea6b;
    puStack_10 = (undefined1 *)0x65ea63;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar2);
    return;
  }
  if (iVar1 == 2) {
    puStack_c = (undefined1 *)0x65eaa3;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ec860,PTR_DAT_0066b444);
    puStack_c = (undefined1 *)0x65eab2;
    (**(code **)(**(int **)PTR_DAT_0066b444 + 0xec))();
  }
  else if (iVar1 == 3) {
    puStack_c = (undefined1 *)0x65ead1;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0056e1d8,PTR_DAT_0066b6dc);
    puStack_c = (undefined1 *)0x65eae0;
    (**(code **)(**(int **)PTR_DAT_0066b6dc + 0xec))();
  }
  else if (*(int *)(param_2 + 0xc) == 4) {
    puStack_c = (undefined1 *)0x65eaed;
    cVar3 = FUN_00651f8c();
    if (cVar3 == '\0') {
      puStack_c = (undefined1 *)0x65eb09;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b6278,PTR_DAT_0066add0);
      puStack_c = (undefined1 *)0x65eb18;
      (**(code **)(**(int **)PTR_DAT_0066add0 + 0xec))();
    }
  }
  return;
}

