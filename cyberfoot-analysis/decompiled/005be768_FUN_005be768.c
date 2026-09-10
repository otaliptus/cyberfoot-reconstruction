// Address: 005be768
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005be768(int param_1)

{
  if (*(HGLOBAL *)(param_1 + 0x214) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(param_1 + 0x214));
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return;
}

