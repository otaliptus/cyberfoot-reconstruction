// Address: 00484ff4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00484ff4(int param_1)

{
  HCURSOR pHVar1;
  int iVar2;
  undefined4 *puVar3;
  HINSTANCE pHVar4;
  
  pHVar1 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  *(HCURSOR *)(param_1 + 0x60) = pHVar1;
  iVar2 = -0x16;
  puVar3 = &DAT_00663280;
  do {
    pHVar4 = DAT_0066c668;
    if (((iVar2 < -0x11) || (-0xc < iVar2)) && (iVar2 != -0x15)) {
      pHVar4 = (HINSTANCE)0x0;
    }
    pHVar1 = LoadCursorA(pHVar4,(LPCSTR)*puVar3);
    FUN_004850f4(param_1,iVar2,pHVar1);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  return;
}

