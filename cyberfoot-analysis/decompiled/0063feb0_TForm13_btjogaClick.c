// Address: 0063feb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_btjogaClick(undefined4 param_1)

{
  undefined *puVar1;
  
  if ((*(int *)(PTR_DAT_0066ac78 + 0xd0) == 1) ||
     (puVar1 = PTR_DAT_0066ac78, *(int *)(PTR_DAT_0066ac78 + 0xd0) == 2)) {
    if (PTR_DAT_0066ac78[0x8c] == '\0') {
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b5078,PTR_DAT_0066b104);
      (**(code **)(**(int **)PTR_DAT_0066b104 + 0xec))();
    }
    FUN_0064af08();
    puVar1 = (undefined *)0x0;
    *(undefined4 *)PTR_DAT_0066ad34 = 0;
  }
  FUN_00636064(param_1,puVar1);
  return;
}

