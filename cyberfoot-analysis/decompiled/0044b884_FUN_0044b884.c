// Address: 0044b884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044b884(int param_1,char param_2)

{
  undefined4 uVar1;
  HWND pHVar2;
  uint uVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (param_2 == '\0') {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x43b;
    pHVar2 = (HWND)FUN_0046cae0(uVar1);
    uVar3 = SendMessageA(pHVar2,UVar4,WVar5,LVar6);
    uVar3 = uVar3 & 0xfffffffe;
  }
  else {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x43b;
    pHVar2 = (HWND)FUN_0046cae0(uVar1);
    uVar3 = SendMessageA(pHVar2,UVar4,WVar5,LVar6);
    uVar3 = uVar3 | 1;
  }
  WVar5 = 0;
  UVar4 = 0x445;
  pHVar2 = (HWND)FUN_0046cae0(uVar1);
  SendMessageA(pHVar2,UVar4,WVar5,uVar3);
  return;
}

