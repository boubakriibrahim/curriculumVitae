namespace curriculum_vitae
{
    public class engineerStudent : computerScience
    {
        // CONTACT
        private string nom = "Boubakri";
        private string prenom = "Ibrahim";
        private DateTime dateNaissance = new DateTime(1999,01,16);
        private string email = "ibrahim.boubakri@ensi-uma.tn";
        private long telephone = +216 44 335 332;
        private string adresse = "Route Manzel Chaker km 5.5 - 3013 Sfax, Tunisie";
        private string linkedIn = "https://www.linkedin.com/in/ibrahimboubakri/";


        // FORMATIONS
        public void mesFormations(int uneAnnee)
        {
            switch (uneAnnee)
            {
                case 2020,2021,2022,2023 : ecoleFrequente = "Ecole Nationale des Sciences de l'Informatique (ENSI), Tunisia";
                diplome = "Diplôme d'Ingénieur en Sciences de l'Informatique";
                break;
                case 2017,2018,2019,2020 : ecoleFrequente = "Institut Préparatoire aux Etudes d'Ingénieur de Sfax (IPEIS), Tunisia";
                diplome = "Cycle préparatoire technologique";
                break;
                case 2016,2017 : ecoleFrequente = "20 Mars 1956, Sfax, Tunisia";
                diplome = "Baccalauréat en technologie";

            }
        }


        // EXPÉRIENCES PROFESSIONNELLES
        public void mesExperiences(int uneAnnee, int unMois)
        {   
            List<pair<string,string>> mesProjets = new List<pair<string,string>>;

            if (uneAnnee == 2021 && unMois >= 1 && unMois <= 5)
            {
                mesProjets.push_back({"Création d'un jeu MEMORY_PUZZLE",
                                    "J'ai développée un jeu de mémoire des cartes avec mon équipe à l'ENSI"});
                mesProjets.push_back({"Création d'un site web de vente de matériel informatique",
                                    "J'ai commencée à développer avec une équipe un site web en utilisant plusieurs technologie 
                                    comme (html - css - js - bootsrap - java - springboot - thymleaf - hibernate - Mysql - Git ...)."});
                mesProjets.push_back({"Création d'une application mobile",
                                    "J'ai commencée à développer avec une équipe une application d'estimation 
                                    du temps d'attente dans les espaces publiques."});

            } else if (uneAnnee == 2022 && unMois >= 9 && unMois <= 12)

            {
                mesProjets.push_back({"Création du site personnage publique",
                                    "J'ai crée ce site web http://leonardodicaprio.rf.gd en utilisant wordpress avec une équipe."});
                mesProjets.push_back({"Création du site web CV",
                                    "J'ai crée ce site web ibrahimboubakri.azurewebsites.net en utilisant un template 
                                    et en modifier son code."});
            }

        }


        // AUTRES EXPÉRIENCES & CENTRES D'INTÉRÊT
        public void mesInterets()
        {
            string clubs[] = {"ENSI Microsoft Club",
                              "Association Robotique ENSI",
                              "Open Source Software ENSI Club",
                              "Club Securite Informatique ENSI",
                              "ENSI Competitive Programming Club",
                              "IEEE ENSI Student Branch"};

            for (string club : clubs)
                cout << "Membre active à " << club << endl;

            string interets[] = {"competitions de sécurité CTF (Capture The Flag)",
                                 "Musique",
                                 "Video games"}

            cout << "Mes interets sont :"<<endl;
            for (string interet : interets)
                cout << interet << endl;
        }

    }
}