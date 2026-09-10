// Address: 006411bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_gridview1HeaderClick(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"posicaojog");
  iVar1 = FUN_0050a2cc();
  if (param_3 == iVar1) {
    (**(code **)(**(int **)(param_1 + 0x334) + 0x1dc))();
    FUN_006380e8(param_1);
  }
  FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"salario");
  iVar1 = FUN_0050a2cc();
  if (param_3 == iVar1) {
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"salariot");
    FUN_0050a760(uVar2,1);
    iVar1 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"salariot");
    if (*(char *)(iVar1 + 0x9a) == '\0') {
      uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"salariot");
      FUN_0050a7dc(uVar2,1);
    }
    else {
      uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"salariot");
      FUN_0050a7dc(uVar2,0);
    }
  }
  FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"passe");
  iVar1 = FUN_0050a2cc();
  if (param_3 == iVar1) {
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"passet");
    FUN_0050a760(uVar2,1);
    iVar1 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"passet");
    if (*(char *)(iVar1 + 0x9a) == '\0') {
      uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"passet");
      FUN_0050a7dc(uVar2,1);
    }
    else {
      uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"passet");
      FUN_0050a7dc(uVar2,0);
    }
  }
  return;
}

