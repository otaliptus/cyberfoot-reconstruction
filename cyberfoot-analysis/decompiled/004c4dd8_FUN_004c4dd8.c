// Address: 004c4dd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004c4dd8(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined1 local_56 [34];
  undefined1 local_34 [36];
  
  bVar1 = *(byte *)(param_1 + 1) & 0x80;
  if (bVar1 == (*(byte *)(param_2 + 1) & 0x80)) {
    cVar2 = FUN_004c47d4();
    cVar3 = FUN_004c47d4();
    if (cVar3 == cVar2) {
      FUN_004c4ca4(param_1,param_2,local_56,0,local_34);
      iVar4 = FUN_004c4988();
    }
    else if (cVar3 < cVar2) {
      iVar4 = 1;
    }
    else {
      iVar4 = -1;
    }
    if (bVar1 != 0) {
      iVar4 = -iVar4;
    }
  }
  else if (bVar1 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

