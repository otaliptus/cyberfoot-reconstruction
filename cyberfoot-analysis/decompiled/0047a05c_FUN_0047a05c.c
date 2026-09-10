// Address: 0047a05c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0047a05c(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  LRESULT LVar5;
  HWND hWnd;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0;
  piVar4 = (int *)FUN_00479fa0(param_1,param_2,1);
  if (piVar4 == (int *)0x0) {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      cVar3 = FUN_00403c10(param_1,PTR_PTR_00475da8);
      if (cVar3 != '\0') {
        FUN_00479074(*(undefined4 *)(param_1 + 0x34));
      }
    }
  }
  else {
    if ((*(byte *)(piVar4 + 7) & 0x10) == 0) {
      FUN_00479074(piVar4);
    }
    (**(code **)(*piVar4 + 0x44))();
    uVar6 = FUN_0047970c(piVar4,0);
    bVar2 = FUN_00479c08(piVar4,0);
    bVar2 = (byte)uVar6 | bVar2;
    if (bVar2 != 0) {
      FUN_00476fb0(piVar4);
    }
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b3ac + 0x44);
    iVar7 = CONCAT31((int3)((uint)uVar6 >> 8),bVar2);
    if (((iVar1 != 0) && (iVar7 = iVar1, *(char *)(iVar1 + 0x22f) == '\x02')) &&
       (piVar4 == *(int **)(iVar1 + 600))) {
      LVar5 = SendMessageA(*(HWND *)(iVar1 + 0x254),0x234,0,0);
      if (LVar5 != 0) {
        hWnd = (HWND)FUN_0046cae0(iVar1);
        DrawMenuBar(hWnd);
      }
    }
    uVar6 = CONCAT31((int3)((uint)iVar7 >> 8),1);
  }
  return uVar6;
}

