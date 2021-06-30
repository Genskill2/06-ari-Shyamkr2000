string ari(string s)
{
    int i = 0;
    int word = 0, sentence = 0, charct = 0;
    while(s[i]) {
        if(s[i] == ' ')
            word++;
        if(s[i] == '.' || s[i] == '!' || s[i] == '?')
            sentence++;
        if(isalnum(s[i]))
            charct++;
        i++;
    }
    float ari = (4.71 * (float)charct / (float)word + (0.5 * (float)word) / (float)sentence) - 21.43;
    int num = int(ari);
    if(ari > (float)num)
        num++;
    switch(num) {
    case 1:
        return "Kindergarten";
        break;
    case 2:
        return "First/Second Grade";
        break;
    case 3:
        return "Third Grade";
        break;
    case 4:
        return "Fourth Grade";
        break;
    case 5:
        return "Fifth Grade";
        break;
    case 6:
        return "Sixth Grade";
        break;
    case 7:
        return "Seventh Grade";
        break;
    case 8:
        return "Eighth Grade";
        break;
    case 9:
        return "Ninth Grade";
        break;
    case 10:
        return "Tenth Grade";
        break;
    case 11:
        return "Eleventh Grade";
        break;
    case 12:
        return "Twelfth grade";
        break;
    case 13:
        return "College student";
        break;
    default:
        return "Professor";
        break;
    }
}
