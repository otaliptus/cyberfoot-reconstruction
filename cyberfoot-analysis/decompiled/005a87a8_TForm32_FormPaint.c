// Address: 005a87a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_FormPaint(int param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_0066b6ec;
  cVar2 = FUN_0040a43c("img\\f01.jpg");
  if (cVar2 != '\0') {
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x4c); iVar6 = iVar6 + iVar5) {
      for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x48); iVar5 = iVar5 + iVar4) {
        uVar7 = *(undefined4 *)puVar1;
        uVar3 = FUN_00481490(param_1);
        FUN_0042ae64(uVar3,iVar5,iVar6,uVar7);
        iVar4 = (**(code **)(**(int **)puVar1 + 0x2c))();
      }
      iVar5 = (**(code **)(**(int **)puVar1 + 0x20))();
    }
  }
  return;
}

