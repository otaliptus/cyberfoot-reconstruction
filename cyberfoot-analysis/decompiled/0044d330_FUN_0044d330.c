// Address: 0044d330
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d330(int param_1,int param_2)

{
  char cVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  undefined1 *puVar5;
  undefined1 auStack_10 [4];
  int local_c;
  
  puVar5 = auStack_10;
  if (param_2 != *(int *)(param_1 + 0x214)) {
    *(int *)(param_1 + 0x214) = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      WVar4 = 1;
      UVar3 = 0x46c;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar2,UVar3,WVar4,(LPARAM)puVar5);
      puVar5 = auStack_10;
      WVar4 = 1;
      UVar3 = 0x46b;
      local_c = param_2;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar2,UVar3,WVar4,(LPARAM)puVar5);
    }
  }
  return;
}

